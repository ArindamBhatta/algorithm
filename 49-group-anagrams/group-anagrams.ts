function groupAnagrams(strs: string[]): string[][] {
    const result: string[][] = [];
    const visited: boolean[] = new Array(strs.length).fill(false);

    function isAnagram(a: string, b: string): boolean {
        if (a.length !== b.length) return false;

        const count = new Array(26).fill(0);

        for (let ch of a) {
            count[ch.charCodeAt(0) - 97]++;
        }

        for (let ch of b) {
            count[ch.charCodeAt(0) - 97]--;
        }

        return count.every(c => c === 0);
    }

    for (let i = 0; i < strs.length; i++) {
        if (visited[i]) continue;

        const group: string[] = [strs[i]];
        visited[i] = true;

        for (let j = i + 1; j < strs.length; j++) {
            if (!visited[j] && isAnagram(strs[i], strs[j])) {
                group.push(strs[j]);
                visited[j] = true;
            }
        }

        result.push(group);
    }

    return result;
}

function groupAnagrams(strs: string[]): string[][] {
    const map = new Map<string, string[]>();

    for (const word of strs) {
        // MAP: build frequency signature
        const freq = new Array(26).fill(0);

        for (const ch of word) {
            freq[ch.charCodeAt(0) - 97]++;
        }

        // Convert frequency array into a string key
        const key = freq.join('#');

        // REDUCE: group by key
        if (!map.has(key)) {
            map.set(key, []);
        }

        map.get(key)!.push(word);
    }

    return Array.from(map.values());
}

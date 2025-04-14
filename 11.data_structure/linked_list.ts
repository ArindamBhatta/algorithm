class NoDe{
    value: any;
    next: NoDe | null;

    constructor(value: any) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    private head: NoDe | null;

    constructor() {
        this.head = null;
    }

    // Add to the end of the list
    append(value: any): void {
        const newNode = new NoDe(value);

        if (!this.head) {
            this.head = newNode;
            return;
        }

        let current = this.head;
        
        while (current.next !== null) {
            current = current.next;
        }

        current.next = newNode;
    }

    // Remove first occurrence of value
    remove(value: any): void {
        if (!this.head) return;

        if (this.head.value === value) {
            this.head = this.head.next;
            return;
        }

        let current = this.head;
        while (current.next && current.next.value !== value) {
            current = current.next;
        }

        if (current.next) {
            current.next = current.next.next;
        }
    }

    // Print all values
    print(): void {
        let current = this.head;
        while (current !== null) {
            console.log(current.value);
            current = current.next;
        }
    }

    // Find if value exists
    contains(value: any): boolean {
        let current = this.head;
        while (current !== null) {
            if (current.value === value) return true;
            current = current.next;
        }
        return false;
    }
}

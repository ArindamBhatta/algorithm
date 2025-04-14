class Stack {
    private data: any[];

    constructor() {
        this.data = [];
    }

    push(item: any): void {
        this.data.push(item);
    }

    pop(): any {
        if (this.isEmpty()) {
            throw new Error("Can't pop from empty stack");
        }
        return this.data.pop();
    }

    size(): number {
        return this.data.length;
    }

    pick(): any {
        if (this.isEmpty()) {
            throw new Error("Stack is empty");
        }
        return this.data[this.data.length - 1];
    }

    isEmpty(): boolean {
        return this.data.length === 0;
    }

    print(): void {
        if (this.isEmpty()) {
            console.log("Stack is empty");
        } else {
            for (let i = this.data.length - 1; i >= 0; i--) {
                console.log(this.data[i]);
            }
        }
    }
}


let stack = new Stack();
stack.push(10);
stack.push(20);
stack.print();             // 20 \n 10
console.log(stack.pick()); // 20
console.log(stack.size()); // 2
console.log(stack.pop());  // 20
stack.print();             // 10


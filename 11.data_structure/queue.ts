class Queue {
    private data: any[];
    constructor() {
        this.data = [];
    }

    isEmpty():boolean {
        return this.data.length === 0;
    }

    enqueue(item: any): void {
        this.data.push(item);
    }

    dequeue() {
        if (this.data.length == 0) {
            throw new Error("Can't dequeue from empty queue");
        } else {
            this.data.shift();
        }
    }

    peek(): any {
        if (this.isEmpty()) {
            throw new Error("Queue is empty");
        }
        return this.data[0];
    }

    size(): number {
        return this.data.length;
    }

    print(): void {
        if (this.isEmpty()) {
            console.log("Queue is empty");
        } else {
            for (let item of this.data) {
                console.log(item);
            }
        }
    }
}


const queue = new Queue();

queue.enqueue("A");
queue.enqueue("B");
queue.enqueue("C");

queue.print();

queue.dequeue(); 

   
queue.print();

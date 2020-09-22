class Node {
    constructor(value) {
        this.left = null;
        this.right = null;
        this.value = value;
    }
}

class BinarySearchTrees {

    constructor() {
        this.root = null;
    }

    lookup(value) {
    	if(!this.root){
    		return false;
    	}
    	let currentNode = this.root;
    	while(currentNode){
    		if(value < currentNode.value){
    			currentNode = currentNode.left;

    		}
    		else if(value > currentNode.value){
    			currentNode = currentNode.right;
    		}
    		else if(currentNode.value === value){
    			return currentNode;
    		}
    		else{
    			return false;
    		}


    	}


}
    insert(value) {
    	const newNode = new Node(value);
    	if(this.root === null){
    		this.root = newNode;
    	}
    	else{
    		let currentNode = this.root;
    			currentNode.value = this.value;
    		while(true){
    			if(value < currentNode.value){
    				//left
    				if(!currentNode.left){
    					currentNode.left = newNode;
    					return this;
    				}
    				currentNode = currentNode.left;
    			}
    			else{
    				//right
    				if(!currentNode.right){
    					currentNode.right = newNode;
    					return this;
    				}
    				currentNode = currentNode.right;
    			}
    		}
    	}
    }
}

const tree = new BinarySearchTrees();
tree.insert(9);
tree.insert(7);
tree.insert(10);
console.log(tree);

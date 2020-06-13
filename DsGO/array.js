class Array{
	constructor(){
		this.data = {};
		this.length = 0;
	}
	get(index){
		return this.data[index];
	}
	push(item){
		this.data[this.length] = item;
		this.length++;
		return this.length;
	}
	pop(){
		const item = this.data[this.length-1];
		delete this.data[this.length-1];
		this.length--;
		return item;
	}
	delete(index){
		const thing = this.data[index];
		this.shiftItems(index);
		delete this.data[this.length-1];
		this.length--;
	}
	shiftItems(index){
	for(let i=index;i<this.length-1;i++){
			this.data[i] = this.data[i+1];
		}
	}
}



const array1 = new Array();
array1.push("Hello");
array1.push("how are ");
array1.push("son");
console.log(array1);
array1.delete(2);
console.log(array1);
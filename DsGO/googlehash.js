var map = {};
function firstRecurringCharacter(input){
for(var i=0;i<input.length;i++){
	if(map[input[i]] !== undefined){
		return input[i];
	}
	else{
		map[input[i]] = i;
	}
}
return undefined;
} 
console.log(firstRecurringCharacter([2,5,2,5,3]));

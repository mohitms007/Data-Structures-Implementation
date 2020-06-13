function haveOrNot(startTime,endTime,queryTime){
	count = 0
	for(let i = 0;i < startTime.length;i++){
		if(startTime[i]<=queryTime && queryTime<=endTime[i]){
			count+=1;
		}
	}
return count;
}
console.log(haveOrNot([1,2,3,4],[3,2,7,8``], 4));
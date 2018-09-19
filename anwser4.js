//The function can be modified as below

function createArrayOfFunctions(y) {
var arr = [];
for(var i = 0; i<y; i++) {
(function(){ 
	var j = i;
	arr[j] = functioin(x){
		return x +j; 
		};
	})();
	return arr;
	}
}
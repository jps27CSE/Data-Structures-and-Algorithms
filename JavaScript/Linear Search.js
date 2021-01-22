function linearSearch(arr, item) {

    for (var i = 0; i < arr.length; i++) {
        if (arr[i] === item) {
            return i;
        }
    }
    return null;
}

var array = [1, 2, 3, 4];

var search = 2;

var result = linearSearch(array, search);

if(result === null)
{
    console.log('The item is not found');
}
else
{
    console.log('The item is found at index '+result+1)
}
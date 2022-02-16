function binary_search(array,item){
let begin = 0;
let end = array.length;
let mid = (begin+end)/2
while(begin!=mid){
  if(item==array[mid]){
    console.log("Found at postion " + mid);
    break;
  }else{
  if(item>array[mid]){
    begin=mid;
  }else{
end=mid;
  }
}
  mid=(begin+end)/2;
console.log("Mid "+mid);
console.log("begin "+begin);
console.log("end "+end);
}
}

let array1 = [1,5,7,9,13,17,21,93];
binary_search(array1,22);

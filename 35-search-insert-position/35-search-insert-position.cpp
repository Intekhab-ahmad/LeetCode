class Solution {

public:

int searchInsert(vector<int> arr ,int k){


if(arr[0]>k){
        return 0;
    }
int s=0;
int e=arr.size();
int mid=(s+e)/2;

while(s<e){
if(arr[mid]==k)

  return mid;

if(arr[mid]>k){

// checking if the previous element is bigger 
    
  if(arr[mid-1]<k)
    return mid;

  // going left side
  e=mid-1;
}
else{

  //going to right

  s=mid+1;
}
 mid=(s+e)/2;
}
return e;
}

};
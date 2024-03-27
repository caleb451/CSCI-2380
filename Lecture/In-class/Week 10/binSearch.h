//Binary Search
    //we are searching for location
    //we have a start index, end index, and target value
    //return index loaction of the value

//Example: start v                                       end v
//arr[11] =     {1, 4, 6, 90, 100, 124, 125, 129, 199, 202, 301}
//                           middle ^

int binSearch(int arr[], int start, int end, int target){
    //initialize
    int mid = (start + end) / 2;
    while(start <= end){
        cout << "searching from index: " << start << "-" << end << endl;
        cout << "middle index value: " << mid << endl;
        //check if value at middle is target
        if(arr[mid] == target)
            return mid;
        //if not, check if middle is larger
        else if(arr[mid] > target){
            cout << "middle value: " << arr[mid] << " is larger than: " << target << endl;
            end = mid - 1;
            mid = (start + end) / 2;
        }
        //else, it is smaller
        else{
            cout << "middle value: " << arr[mid] << " is smaller than: " << target << endl;
            start = mid + 1;
            mid = (start + end) /2;
        }
    }   
    //exited out the code since there was no target
    return -1;
}

int binSearchR(int arr[], int start, int end, int target){
    int mid = (start + end) / 2;
    //BASE CASE 1
    if(arr[mid] == target)
        return mid;
    //BASE CASE 2
    else if(start > end)
        return -1;
    //RECURSIVE CASE
    else if(arr[mid] > target)
        return binSearchR(arr, start, mid - 1, target);
    else if(arr[mid] < target)
        return binSearchR(arr, mid + 1, end, target);
}
//Define a function incFill()
    //input: array of integers, length of array, increment
    //return: nothing
    //task: fill te array, with multiples of increment
    // EX: inc = 7, length of array is 4
        //array should have values {0, 7, 14, 21}
        //to test, you can add printing array

void incFill(int arr[], int length, int inc){
    int value;
    for (int i = 0; i < inc; i++){
        value = 7 * i;
        arr[i] = value;
    }

}
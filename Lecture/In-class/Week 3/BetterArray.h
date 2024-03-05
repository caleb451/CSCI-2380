//Define a class BetterArray

//public attributes:
    //array of integers
    //capacity of the array
    //number of values currently in the array

class BetterArray{
    public:
        int num = 0;
        int capacity = 3;
        int array[3];

        //define a method print() that will print all array values
        //we should only print acutal values
            //if theres no values, print "array is empty"
            //if there is only 1 value, print that value etc.
        void print(){
            if(num == 0){
                cout << "Array is empty" << endl;
                return;
            }
            for(int i = 0; i < capacity; i++){
                cout << array[i] << " ";
            }
            cout << endl;
        }

        //define a method addVal()
            // input: new value to add
            //return nothing
            //task: take in the new value, and
                //1. check if it is a nonnegative
                    //if so, add it to the next empty space in array
                    //if not, print an error message
                //2. update any attributes we need
                //3. make sure, that we don't try to overfill array
                    //if the array is full, print an error message
        void addVal(int newnum){
            if(newnum < 0)
                cout << "Only negative numbers" << endl;
            else if (num >= capacity)
                cout << "Array is full" << endl;
            else{
                array[num] = newnum;
                num++;
                print();
            }
        }
        //Define a function removeVal()
            //remove the last value in the array
            //to remove, just ignore it by adjusting num
            //print the num to confirm
        void removeVal(){
            
        }
        //constructor
        //define a constructor that will give initial data to attributes
        //capacity should be assigned with 3
        //num should be assigned with a zero
        //print a confirmation message

        BetterArray(){
            
        }
};
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    // Init
    int * r = new int[lenArr1 + lenArr2];
    int iter1 = 0;
    int iter2 = 0;
    int index = 0;
    
    // Get the flow
    bool inc = true;
    if (firstArr[lenArr1 - 1] < firstArr[0]) inc = false;  
    
    //
    while (index < lenArr1 + lenArr2){
        int nextValue;
        
        if (iter1 >= lenArr1) {
            nextValue = secondArr[iter2++];
        } else if (iter2 >= lenArr2) {
            nextValue = firstArr[iter1++];
        } else {
            if (inc)
                nextValue = (firstArr[iter1] < secondArr[iter2]) ? firstArr[iter1++] : secondArr[iter2++];
            else 
                nextValue = (firstArr[iter1] > secondArr[iter2]) ? firstArr[iter1++] : secondArr[iter2++];
        }
        
        r[index] = nextValue;
        index++;
    }
    
    return r;
}
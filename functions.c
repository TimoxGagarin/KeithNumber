void output(int* array, int length){
    for(int i = 0; i < length; i++){
        printf("%i ", array[i]);
        if(i != length - 1)
            printf("+ ");
    }
}

void get_digits(int* array, int num, int length){
    for(int i = length - 1; i >= 0; i--){
        array[i] = num % 10;
        num /= 10;
    }
}

void length(int number, int* length){
    *length = 0;
    while(number != 0){
        number /= 10;
        (*length)++;
    }
}

void step(int* array, int length, int element){
    for(int i = 0; i < length-1; i++)
        array[i] = array[i+1];
    array[length-1] = element;
}

int sum(int* array, int length){
    int sum = 0;
    for(int i = 0; i < length; i++)
        sum += array[i];
    return sum;
}
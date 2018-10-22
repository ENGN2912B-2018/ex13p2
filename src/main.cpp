inline int func(int i){
    return i*i;
}

int main(){
    int i = 2;

    i = func(i);
    i = func(i);
    i = func(i);

    //std::cout << i << std::endl;

    return i;
}


void func(int& i){
    i++;
}

int main(){
    int i = 0;

    func(i);
    func(i);
    func(i);

    return i;
}

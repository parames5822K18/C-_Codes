class practice_1{
    public static void main(String args[]){
        int num=9;
        int result1;
        result1=switch(num){
            case 1 : yield 1;
            case 9 : yield 2;
            default : yield -1;
        };
        System.out.print(result1);
    }
}
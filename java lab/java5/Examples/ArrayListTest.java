import java.util.ArrayList; 
import java.util.Scanner;

class ArrayListTest
{
public static void main(String[] args){ 

ArrayList<Integer> numbers = new ArrayList<Integer>(); 
Scanner input = new Scanner(System.in);
int x = input.nextInt(); 

while (x != -1){
numbers.add(x);
x = input.nextInt();
}

for (Integer y: numbers){ System.out.print(y + " ");
}
System.out.println();
}
}
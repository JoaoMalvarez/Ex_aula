package projetos_quero_adiantar.hannoi;
import java.util.Comparator;
import java.util.Scanner;
public class Hannoi {
    public static void main(String[] args) throws Exception {
        System.out.println("Torre de Hannoi");
        System.out.print("Digite o número de discos: ");
        Scanner scanner = new Scanner(System.in);
        int numDiscos = scanner.nextInt();
        //adicionar os discos na torre 1


        while (!fila.isEmpty()) {
            System.out.println(fila.pop());
        }
    }
}
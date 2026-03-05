import java.util.Scanner;
public class App {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 

        System.out.println("\n ====== VALORES TECLADO ======");
        System.out.print(" Nombre: ");
        String nombre = sc.nextLine();
        System.out.print(" Edad: ");
        int edad = sc.nextInt();
        System.out.print(" Sexo (H/M): ");
        char sexo = sc.next().charAt(0);
        System.out.print(" Peso en kg: ");
        double peso = sc.nextDouble();
        System.out.print(" Altura en metros: ");
        double altura = sc.nextDouble();

        Persona objeto1 = new Persona(nombre, edad, nombre, sexo, peso, altura);
        Persona objeto2 = new Persona(nombre, edad, sexo);
        Persona objeto3 = new Persona();
        objeto3.setNombre("nombre");
        objeto3.setEdad(400000);
        objeto3.setAltura(23.3);
        objeto3.setSexo('M');
        objeto3.setPeso(203.3);
        
        System.out.println( "=============================");

        Persona[] listaPersonas = {objeto1, objeto2, objeto3};
        for (int i=0 ; i < listaPersonas.length; i++) {
            System.out.println("--- Resutlados Objeto " + (i + 1) + " ---");
            String viejote = listaPersonas[i].esMayorEdad() ? "Si, esta viejo" : "No, esta joven";
            System.out.println("Es mayor de Edad: " + viejote);
            System.out.println("IMC (): " + listaPersonas[i].calcularIMC());
            System.out.println(listaPersonas[i].toString());
        }

        sc.close();
    }
}

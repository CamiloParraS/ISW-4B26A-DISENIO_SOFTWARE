public class App {
    public static void main(String[] args) throws Exception {
        CuentaBancaria cuenta1 = new CuentaBancaria("Juan Pérez", 1000.0);
        System.out.println(cuenta1);
        cuenta1.depositar(500.0);
        cuenta1.retirar(200.0);
        System.out.println(cuenta1);
    }
}

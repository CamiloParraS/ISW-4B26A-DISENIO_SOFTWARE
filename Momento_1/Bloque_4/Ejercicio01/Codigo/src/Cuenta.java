public class Cuenta {

    // === Atributos ===
    private String titular;
    private double cantidad;

    // === Constructores ===
    // Solo Titular
    public Cuenta(String titular) {
        this.titular = titular;
        this.cantidad = 0.0;
    }

    // Titular y Cantidad
    public Cuenta(String titular, double cantidad) {
        this.titular = titular;
        this.cantidad = cantidad;
    }

    // === Metodos ===

    // getters
    public String getTitular() {
        return titular;
    }

    public double getCantidad() {
        return cantidad;
    }

    // setters
    public void setTitular(String titular) {
        this.titular = titular;
    }

    public void setCantidad(double cantidad) {
        this.cantidad = cantidad;
    }

    // ingresar
    public void ingresar(double cantidad) {
        if (cantidad > 0) {
            this.cantidad += cantidad;
        }
    }

    // retirar
    public void retirar(double cantidad) {
        this.cantidad -= cantidad;
        if (this.cantidad < 0) {
            this.cantidad = 0;
        }
    }

    // toString
    @Override
    public String toString() {
        return "titular = '" + titular + "\'" + ", cantidad = " + cantidad;
    }

    public static void main(String[] args) {
        Cuenta c1 = new Cuenta("Carlitos");
        System.out.println(c1);

        c1.ingresar(200.0);
        System.out.println(c1);

        c1.ingresar(-100.0);
        System.out.println(c1);

        c1.retirar(600.0);
        System.out.println(c1);

        Cuenta c2 = new Cuenta("Maria", 1000.0);
        System.out.println(c2);
    }
}

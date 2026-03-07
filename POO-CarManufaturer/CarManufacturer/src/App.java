import java.util.ArrayList;
import java.util.List;

public class App {
    public static void main(String[] args) {
        Llanta llantaRadial = new Llanta(18.5f, TipoLlanta.RADIAL);
        Chasis chasisAcero  = new Chasis(120.0f, MaterialChasis.ACERO);
        ArrayList<String> coloresPlanta1 = new ArrayList<>();
        coloresPlanta1.add("rojo");
        coloresPlanta1.add("negro");
        Planta planta1 = new Planta(llantaRadial, chasisAcero, coloresPlanta1);

        Llanta llantaNieve    = new Llanta(20.0f, TipoLlanta.NIEVE);
        Chasis chasisAluminio = new Chasis(85.0f, MaterialChasis.ALUMINIO);
        ArrayList<String> coloresPlanta2 = new ArrayList<>();
        coloresPlanta2.add("blanco");
        coloresPlanta2.add("azul");
        Planta planta2 = new Planta(llantaNieve, chasisAluminio, coloresPlanta2);

        Fabrica fabrica = new Fabrica();
        fabrica.agregarPlanta(planta1);
        fabrica.agregarPlanta(planta2);

        List<Carro> carros = fabrica.producirCarros();
        for (int i = 0; i < carros.size(); i++) {
            System.out.println((i + 1) + ": " + carros.get(i));
        }
    }
}
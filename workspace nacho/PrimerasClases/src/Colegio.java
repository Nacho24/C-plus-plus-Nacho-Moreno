
public class Colegio extends Edificio{

	
	private int numeroAulas;
	private boolean pabellon;
	public Colegio(String direccion, int codigopostal, float altura,
			boolean calefaccioncentral) {
		super(direccion, codigopostal, altura, calefaccioncentral);
		this.numeroAulas=numeroAulas;
		//son los parametros que va a usar la clase madre
		// TODO Auto-generated constructor stub
	}
	public int getCapacidadColegio(){
		int capacidadColegio=numeroAulas*30;
		return(CapacidadColegio);
	}
}

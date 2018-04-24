
public class Edificio {
	private String direccion;
	private int codigoPostal;
	private float altura;
	private boolean calefaccioncentral;
	public Edificio(String direccion, int codigoPostal, float altura,
			boolean calefaccioncentral) {
		super();
		this.direccion = direccion;
		this.codigoPostal = codigoPostal;
		this.altura = altura;
		this.calefaccioncentral = calefaccioncentral;
	}
	public String getDireccion() {
		return direccion;
	}
	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}
	public int getCodigoPostal() {
		return codigoPostal;
	}
	public void setCodigoPostal(int codigoPostal) {
		this.codigoPostal = codigoPostal;
	}
	public float getAltura() {
		return altura;
	}
	public void setAltura(float altura) {
		this.altura = altura;
	}
	public boolean isCalefaccioncentral() {
		return calefaccioncentral;
	}
	public void setCalefaccioncentral(boolean calefaccioncentral) {
		this.calefaccioncentral = calefaccioncentral;
	}
	

}

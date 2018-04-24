
public class Segmento {
	private Punto p1;
	private Punto p2;
	public Segmento(Punto p1, Punto p2) {
		super();
		this.p1 = p1;
		this.p2 = p2;
	}
	public Punto getP1() {
		return p1;
	}
	public void setP1(Punto p1) {
		this.p1 = p1;
	}
	public Punto getP2() {
		return p2;
	}
	public void setP2(Punto p2) {
		this.p2 = p2;
	}
	public float getdistance(){
		double distance;
		double c1,c2;
		c1=p.2getX()-p1.getX();
		c2=p1.getY()-p2.getY();
		distance=Math.sqrt(Math.pow(c1, c2)+Math.pow(c1,c2));
				
		return distance;
	}
	
}

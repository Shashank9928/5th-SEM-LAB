import java.applet.*;
import java.awt.*;

public class Shikha_Remdeo extends Applet {

    public void paint(Graphics g)
    {

        int xpoints[]={150,250,350,150};
        int ypoints[]={250,50,250,250};
        g.drawPolygon(xpoints,ypoints,4);
        g.drawLine(250,50,250,250);
        g.drawOval(187,133,125,116);
    }
    public void init() {
    }

}
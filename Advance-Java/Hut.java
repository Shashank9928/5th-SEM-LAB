/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.applet.*;
import java.awt.*;

public class Hut extends Applet {

  
    public void paint(Graphics g){
       /* g.setColor(Color.CYAN);
        g.drawOval(50, 50, 200, 200);
        g.setColor(Color.gray);
        g.drawOval(80, 90, 40, 30);
        g.setColor(Color.gray);
        g.drawOval(180,90,40,30);
        g.setColor(Color.yellow);
        g.drawOval(135,140,30,20);
        g.setColor(Color.pink);
        g.drawArc(95,150,110,70,0,-180);*/
       int xpoints[]={210,300,110,210};
       int ypoints[]={30,100,100,30};
       g.setColor(Color.DARK_GRAY);
       
       g.fillPolygon(xpoints,ypoints,4);
       g.setColor(Color.yellow);
       g.fillRect(140,100,135,110);
       g.setColor(Color.BLUE);
       g.fillRect(180,110,55,65);
       g.setColor(Color.BLUE);
       g.drawLine(180,190,230,190); 
       g.setColor(Color.LIGHT_GRAY);
       g.fillOval(20,20,50,50);
        
    }
    
}

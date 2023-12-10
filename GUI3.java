import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
        public MarvellousFrame(Strinf title);
        {
        Frame fobj = new Frame("title");
        fobj.setSize(300,600);
        fobj.setVisible(true);
        fobj.addwindowListner(new MarvellousListener());
        }
}

class MarvellousListener implements WindowListener
{

}

class GUI3
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}
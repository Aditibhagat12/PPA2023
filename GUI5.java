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

class MarvellousListener extends WindowAdapter
{
  public void windowClosing(WindowEvent obj);
  {
    System.exit(0);
  }
}*

class GUI5
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}

import javax.swing.*;
import java.awt.event.*;

class MarvellousFrame
{
        public MarvellousFrame(String title);
        {
        JFrame fobj = new JFrame("title");
        fobj.setSize(300,600);
        fobj.setVisible(true);

        JButton bobj = new JButton("submit");
        fobj.add(bobj);
        fobj.addwindowListner(new MarvellousListener());
        }
}

class MarvellousListener extends WindowAdapter
{
  public void WindowClosing(WindowEvent obj);
  {
    System.exit(0);
  }
}

class GUI7
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}

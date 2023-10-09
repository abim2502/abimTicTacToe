import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class TicTacToe implements ActionListener {
    Random random = new Random();
    JFrame frame = new JFrame();
    JPanel titlepanel = new JPanel();
    JPanel buttonpanel = new JPanel();
    JLabel textfield = new JLabel();
    JButton [] buttons = new JButton[9];
    boolean player1;
    TicTacToe(){
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(700,700);
        frame.getContentPane().setBackground(new Color(50,50,50));
        frame.setLayout(new BorderLayout());
        frame.setVisible(true);

        textfield.setBackground(new Color(25, 25, 25));
        textfield.setForeground(new Color(25, 255,0));
        textfield.setFont(new Font("ink Free", Font.BOLD, 75));
        textfield.setHorizontalAlignment(JLabel.CENTER);
        textfield.setText("Tic Tac Toe");
        textfield.setOpaque(true);

        titlepanel.setLayout(new BorderLayout());
        titlepanel.setBounds(0,0,700,100);

        buttonpanel.setLayout(new GridLayout(3,3));
        buttonpanel.setBackground(new Color(150,150,150));

        for (int i=0; i<9; i++){
            buttons[i] = new JButton();
            buttonpanel.add(buttons[i]);
            buttons[i].setFont(new Font("mv Boli", Font.BOLD,120));
            buttons[i].setFocusable(false);
            buttons[i].addActionListener(this);

        }

        titlepanel.add(textfield);
        frame.add(titlepanel,BorderLayout.NORTH);
        frame.add(buttonpanel);

        giliran();
    }
    public void actionPerformed(ActionEvent e) {
        for (int i=0; i<9; i++){
            if (e.getSource()==buttons[i]) {
                if (player1){
                    if (buttons[i].getText()==""){
                        buttons[i].getForeground ();
                        buttons[i].setText("X");
                        player1 = false;
                        textfield.setText("O turn");
                        check();
                    }

                }
                else {
                    if (buttons[i].getText()==""){
                        buttons[i].getForeground();
                        buttons[i].setText("O");
                        player1 = true;
                        textfield.setText("X turn");
                        check();
                    }
                }
            }
        }
    }
    public void giliran (){

        try{
            Thread.sleep(2000);
        }catch (InterruptedException e){
            e.printStackTrace();
        }
        if (random.nextInt(2)==0){
            player1 = true;
            textfield.setText("X turn");
        }
        else {
            player1 = false;
            textfield.setText("O turn");
        }
    }
    public void check (){
        //p1
        if(     (buttons[0].getText()=="X") &&
                (buttons[1].getText()=="X") &&
                (buttons[2].getText()=="X") ){
            Xwin(0,1,2);
        }
        if(     (buttons[3].getText()=="X") &&
                (buttons[4].getText()=="X") &&
                (buttons[5].getText()=="X") ){
           Xwin(3,4,5);
        }
        if(     (buttons[6].getText()=="X") &&
                (buttons[7].getText()=="X") &&
                (buttons[8].getText()=="X") ){
             Xwin(6,7,8);
        }
        if(     (buttons[0].getText()=="X") &&
                (buttons[3].getText()=="X") &&
                (buttons[6].getText()=="X") ){
            Xwin(0,3,6);
        }
        if(     (buttons[1].getText()=="X") &&
                (buttons[4].getText()=="X") &&
                (buttons[7].getText()=="X") ){
                Xwin(1,4,7);
        }
        if(     (buttons[2].getText()=="X") &&
                (buttons[5].getText()=="X") &&
                (buttons[8].getText()=="X") ){
            Xwin(2,5,8); }
        if(     (buttons[0].getText()=="X") &&
                (buttons[4].getText()=="X") &&
                (buttons[8].getText()=="X") ){
            Xwin(0,4,8);
        }
        if(     (buttons[2].getText()=="X") &&
                (buttons[4].getText()=="X") &&
                (buttons[6].getText()=="X") ) {
            Xwin(2, 4, 6);
        }

        //p2
        if(     (buttons[0].getText()=="O") &&
                (buttons[1].getText()=="O") &&
                (buttons[2].getText()=="O") ){
            OWin(0,1,2);
        }
        if(     (buttons[3].getText()=="O") &&
                (buttons[4].getText()=="O") &&
                (buttons[5].getText()=="O") ){
            OWin(3,4,5);
        }
        if(     (buttons[6].getText()=="O") &&
                (buttons[7].getText()=="O") &&
                (buttons[8].getText()=="O") ){
            OWin(6,7,8);
        }
        if(     (buttons[0].getText()=="O") &&
                (buttons[3].getText()=="O") &&
                (buttons[6].getText()=="O") ){
            OWin(0,3,6);
        }
        if(     (buttons[1].getText()=="O") &&
                (buttons[4].getText()=="O") &&
                (buttons[7].getText()=="O") ){
            OWin(1,4,7);
        }
        if(     (buttons[2].getText()=="O") &&
                (buttons[5].getText()=="O") &&
                (buttons[8].getText()=="O") ){
           OWin(2,5,8); }
        if(     (buttons[0].getText()=="O") &&
                (buttons[4].getText()=="O") &&
                (buttons[8].getText()=="O") ){
            OWin(0,4,8);
        }
        if(     (buttons[2].getText()=="O") &&
                (buttons[4].getText()=="O") &&
                (buttons[6].getText()=="O") ) {
            OWin(2, 4, 6);
        }
    }
    public void Xwin(int a, int b, int c){
        buttons[a].setBackground(Color.BLUE);
        buttons[b].setBackground(Color.BLUE);
        buttons[c].setBackground(Color.BLUE);

        for (int i=0; i<9; i++){
            buttons[i].setEnabled(false);
        }

        textfield.setText("X win!!!");
    }
    public void OWin(int a, int b, int c){
        buttons[a].setBackground(Color.BLUE);
        buttons[b].setBackground(Color.BLUE);
        buttons[c].setBackground(Color.BLUE);

        for (int i=0; i<9; i++){
            buttons[i].setEnabled(false);
        }
        textfield.setText("O win!!!");
    }
}

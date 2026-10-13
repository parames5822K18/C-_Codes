#include<bits/stdc++.h>
using namespace std;
class game{
    private:
    int k=9;
    int X_score=0,O_score=0;
    char board[3][3]={
           {'1','2','3'},
           {'4','5','6'},
           {'7','8','9'}};
    int freq[3][3]={
           {0,0,0},
           {0,0,0},
           {0,0,0}};
    string line="\n---+---+---";
    bool decision(){
        for(int j=0;j<3;j++){
            if((board[j][0]==board[j][1])&&(board[j][0]==board[j][2])){
                return 1;
            }}
        for(int j=0;j<3;j++){
            if((board[0][j]==board[1][j])&&(board[0][j]==board[2][j])){
                return 1;
            }}
        if((board[0][0]==board[1][1])&&(board[0][0]==board[2][2]))return 1;
        else if((board[0][2]==board[1][1])&&(board[0][2]==board[2][0]))return 1;
        else return 0;
        }
    void print_board(){
        for(int i=0;i<3;i++){
            cout<<'\n';
        for(int j=0;j<3;j++){
           cout<<' '<<board[i][j]<<' ';
           if(j<2)cout<<'|';
        }
        if(i<2)cout<<line;
        }
        cout<<'\n';
    }
    void player_fun(char *person){
	cout<<"\nplayer "<<*person<<" enter a value (1,9) :";
        int x;
        cin>>x;
        x--;
        if((x<9 &&x>=0)&&!freq[x/3][x%3]){
        board[x/3][x%3]=(*person);
        freq[x/3][x%3]++;
        k--;
        print_board();
        if(decision()){
        cout<<"\nPlayer "<<*person<<" WINS";
        (*person=='X')?X_score++:O_score++;
        score_card();
        }
        else if(!k){cout<<"It's a Draw!!";
           score_card();
        }
        }
        else{
        	cout<<"Invalid Input";
        	player_fun(person);
		}
}
void computer_fun(char *computer){
	bool fun_done=false;
	for(int i=0;i<3;i++){
		if(board[i][0]==board[i][1] && board[i][1]!=board[i][2] && board[i][0]!=board[i][2] && !freq[i][2]){
			board[i][2]=*computer;
			freq[i][2]++;
			fun_done=true;
			break;
		}
		if(board[i][0]!=board[i][1] && board[i][1]==board[i][2] && board[i][0]!=board[i][2] &&!freq[i][0]){
			board[i][0]=*computer;
			freq[i][0]++;
			fun_done=true;
			break;
		}
		if(board[i][0]!=board[i][1] && board[i][1]!=board[i][2] && board[i][0]==board[i][2] && !freq[i][1]){
			board[i][1]=*computer;
			freq[i][1]++;
			fun_done=true;
			break;
		}
	}
	if(!fun_done)for(int i=0;i<3;i++){
			if(board[0][i]==board[1][i] && board[1][i]!=board[2][i] && board[0][i]!=board[2][i] && !freq[2][i]){
				board[2][i]=*computer;
				freq[2][i]++;
				fun_done=true;
				break;
			}
			if(board[0][i]!=board[1][i] && board[1][i]==board[2][i] && board[0][i]!=board[2][i] && !freq[0][i]){
				board[0][i]=*computer;
				freq[0][i]++;
				fun_done=true;
				break;
			}
			if(board[0][i]!=board[1][i] && board[1][i]!=board[2][i] && board[0][i]==board[2][i] && !freq[1][i]){
				board[1][i]=*computer;
				freq[1][i]++;
				fun_done=true;
				break;
			}
		}
	if(!fun_done){
		if(board[1][1]==board[0][0] && board[2][2]!=board[1][1] && board[0][0]!=board[2][2] && !freq[2][2]){
		board[2][2]=*computer;
		freq[2][2]++;
		fun_done=true;
    	}
    	if(board[1][1]!=board[0][0] && board[2][2]==board[1][1] && board[0][0]!=board[2][2] && !freq[0][0]){
		board[0][0]=*computer;
		freq[0][0]++;
		fun_done=true;
    	}
    	if(board[1][1]!=board[0][0] && board[2][2]!=board[1][1] && board[0][0]==board[2][2] && !freq[1][1]){
		board[1][1]=*computer;
		freq[1][1]++;
		fun_done=true;
    	}
	}
	if(!fun_done){
		if(board[1][1]==board[2][0] && board[0][2]!=board[1][1] && board[2][0]!=board[0][2] && !freq[0][2]){
		board[0][2]=*computer;
		freq[0][2]++;
		fun_done=true;
     	}
     	if(board[1][1]!=board[2][0] && board[0][2]==board[1][1] && board[2][0]!=board[0][2] && !freq[2][0]){
		board[2][0]=*computer;
		fun_done=true;
		freq[2][0]++;
     	}
     	if(board[1][1]!=board[2][0] && board[0][2]!=board[1][1] && board[2][0]==board[0][2] && !freq[1][1]){
		board[1][1]=*computer;
		fun_done=true;
		freq[1][1]++;
     	}
	}
	if(!fun_done){
		cout<<"\nAfter Computer Function\n";
	    int xy;
		for(xy=0;xy<9;xy++){
			if(freq[xy/3][xy%3]==0)break;
		}
		board[xy/3][xy%3]=*computer;
		freq[xy/3][xy%3]++;
		fun_done=true;
	}
	k--;
	print_board();
	if(decision()){
		cout<<"\n Computer "<<*computer<<" WINS!!\n";
		(*computer=='X')?X_score++:O_score++;
		score_card();
	}
	else if(!k){
		cout<<"It's Draw\n";
		score_card();
		
	}
    }
    void fun(char *player){
        cout<<"\nplayer "<<*player<<" enter a value (1,9) :";
        int x;
        cin>>x;
        x--;
        if((x<9 &&x>=0)&&!freq[x/3][x%3]){
        if(*player=='X'){
        board[x/3][x%3]='X';
        *player='O';
       }
       else{
           board[x/3][x%3]='O';
           *player='X';
        }
        k--;
        print_board();
        char xa=(*player=='X')?'O':'X';
        if(decision()){
        cout<<"\nPlayer "<<xa<<" WINS";
        (xa=='X')?X_score++:O_score++;
        score_card();
        }
        else if(!k){cout<<"It's a Draw!!";
           score_card();
        }
        freq[x/3][x%3]++;
        }
        else cout<<"Invalid Input";
    }
    void score_card(){
    string line1="\n+---+---+";
    string line2="\n| X | O |";
    cout<<line1;
    cout<<line2;
    cout<<line1;
    cout<<'\n'<<"| "<<X_score<<" | "<<O_score<<" |";
    cout<<line1;
    }
    void player_player(char person){
        char player1=person;
        print_board();
        while(k&& (!decision()))fun(&person);
        char ch;
        cout<<"Restart Y/n: ";
        cin>>ch ;
        if(ch=='Y'){
            char c='1';
            for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                board[i][j]=c++;
                freq[i][j]=0;
            }}
        k=9;
        player_player(player1);
        }
    }
    void player_computer(){
        srand(time(0));
        k=9;
        char *person,*computer;
        char z=(rand()%2)?'X':'O';
        person=&z;
        char z1=(*person=='X')?'O':'X';
        computer=&z1;
        cout<<person<<" is your symbol";
        while(k&&!decision()){
            player_fun(person);
            if(k&&!decision()){
                computer_fun(computer);
            }
        }
        char next;
        cout<<"Restart (Y n): ";
        cin>>next;
        if(next!='Y'){
            return;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
           {
            freq[i][j]=0;
            board[i][j]='0'+3*i+j+1;}
            }
            decision();
            player_computer();
    }
    public:
    void menu(){
        int ch;
        cout<<"+-================-+-====-+\n";
        cout<<"|                  |      |\n";
        cout<<"|_Player_Player____|  01  |\n";
        cout<<"|_Player_Computer__|  02  |\n";
        cout<<"|_______EXIT_______|  03  |\n";
        cout<<"|                  |      |\n";
        cout<<"+-=============== -+-====-+\n";
        cout<<"Your's Choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                   char player;
                   cout<<"Enter Player Name:";
                   cin>>player;
                   player_player(player);
                   break;
            case 2:player_computer();
                   break;
            case 3:break;
            default:cout<<"+==INVALID INPUT==+\n";
        }
    }
}tic_toe;
int main(){
    tic_toe.menu();
}
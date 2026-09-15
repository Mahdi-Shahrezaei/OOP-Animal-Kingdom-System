//📩 Access & Support Full Source Code: If you require the complete, uncompressed source //files or have specific questions about the architecture, please reach out via ♾️ //Telegram: @AI172 Executable Password: The provided executable file is password-protected. //Please use the following password 🫆 to access it: M.SH.420



//line 15
class Animals_class  {      //Class 1#//animal
 
public:			string name , livingplace , instict , feed , race , color  ; 
	int height , weight;
	
		
		    void input(){
		    	
		    		cout<<"\n--------------------------------------------------------------\n";
		    		cout<<  "------------------Question About Your Animal------------------\n";
				cout<<"This animal is called : ";
				cin>>name;
				cout<<"Animal is living   in : ";
				cin>>livingplace;
				cout<<"Animal instict     is : ";
				cin>>instict;
				cout<<"Animal  feed       is : ";
				cin>>feed;
				cout<<"Animal  race       is : ";
				cin>>race;
				cout<<"Animal  color      is : ";
				cin>>color;
				cout<<"Animal weight & height: ";
				cin>>weight>>height;
			   
			   } 
			void ShowDetails()
// line 39



// line 417

cout<<"           --Choose A Group Of Animal--"<<endl;
   cout<<"      1-(Vertebrate)            2-(Invertebrate) : ";
   cin>>x;
   cout<<endl<<endl;
   
   	switch (x) {
		case 1 :
			cout<<"          --Choose Type Of Vertebrate Animals--"<<endl;
            cout<<"        1-(Mammal)                   2-(Reptiles)  "<<endl;
            cout<<"        3-(Mammal-Reptiles)           4-(No data)  - coming soon...   :" ;// gozine 3  -  2 ta class valed dare .
            cin>>x1;
			break;
		case 2 :
		    	cout<<"         --Choose Type Of InVertebrate Animals--"<<endl;
		    	cout<<"       1-(Bodybag)                   2-(Molluscs)  "<<endl;
		    	cout<<"       3-(No data)                   4-(No data)  - coming soon...   :" ;
		    cin>>x2;
		    break;	
		    default :
		    	cout<<" *Unknown Value* ";}
		    	
		    	cout<<endl<<endl;
// line 438


// line 630


	    	if(n2!=0){
  		switch (n2) {
		case 1 :
			bodybag.input();
			bodybag.ShowDetails();
			bodybag.savefile();
			break;	
		case 2 :
			snail.input();
			snail.ShowDetails();
			snail.savefile();
			break;
		case 3 :
			mollusca.input();
			mollusca.ShowDetails();
				mollusca.savefile();
			break;	
	 default :
		    	cout<<"Unknown Value "; 
			    	}
	
	
}}
    if(X==2){
    	
    if(n1!=0){
    	switch (n1) {
		case 1 :
	    cow.osave();
			break;
		case 2 :
		mammal.osave();
		    break;	
		case 3 :
		crocodil.osave();	
			break;
		case 4 :
		reptil.osave();
			break;	
		case 5 :
		ekidna.osave();
			break;
		case 6 :
		mrs.osave();
			break;		   
		    default :
		    	cout<<"Unknown Value ";	}}
	if(n2!=0){
	switch (n2) {
		case 1 :
			bodybag.osave();
			break;	
		case 2 :
			snail.osave();
			break;
		case 3 :
			mollusca.osave();
			break;	
	 default : cout<<"Unknown Value "; 
			    	}	    	
 }}

// line 700

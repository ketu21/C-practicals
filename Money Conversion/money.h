class Money 
{
	int dollar, cent;
public:
	Money(); 
	Money(int mydollars, int mycents); 
	Money(double amount);

	void set_dollars(int mydollars); 
	void Get_dollars(); 
	void set_cents(int mycents); 
	void Get_cents();

	int GetDollarsPart(double am); 
	int GetCentsParts(double am); 
	void print();

	//friend Money operator +( const Money & lhs ,const Money & rhs) ;
	Money operator +(const Money & rhs) const;
	//	Money operator -(const Money & rhs)const; 
	friend Money operator - ( const Money & lhs , const Money & rhs);

	 friend bool operator == ( const Money & lhs , const Money & rhs);
	


	// stream overload
	// istream == inputstream ; outputstream ostream
	friend std::ostream& operator <<(std::ostream& myoutputStream, Money& m); 
	friend std::istream& operator >>(std::istream& myinputstream, Money& m);

};
class Room : public Person;
class Room {
    private:
    int m_roomnum;
    string m_roomtype;
    string m_guestname;
    public:
    Room();
    Room (int n, string t, string g);
    //Getters and Setters
    int Getroomnum(){return m_roomnum;};
    string Getroomnum(){return m_roomtype;};
    string Getroomnum(){return m_guestname;};
     void Setroomnum(int n){m_roomnum = n;};
     void Setroomtype(string t){m_roomtype = t;};
     void Setguestname(string g){m_guestname = g;};

}
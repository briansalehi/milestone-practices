class Database {
private:
    // private destructor, prohibits instantiation on stack
    ~Database() {}

public:
    static void destruct(Database* object) {
        delete object;
    }
};

int main()
{
    /*
    Database db; // on stack
    */

    Database* db = new Database; // on heap
    Database::destruct(db);
    return 0;
}

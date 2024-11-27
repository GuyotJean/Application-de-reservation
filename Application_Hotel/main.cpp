#include "header.h";
#include "MyForm.h";

//Declaration de global
vector<Chambres> chambres;

int main()
{
    // Instantiate Driver
    Driver* driver = mariadb::get_driver_instance();

    // Configure Connection
    SQLString url("jdbc:mariadb://localhost:3306/hotel");
    Properties properties({ {"user", "jean"}, {"password", "123"} });

    // Establish Connection
    unique_ptr<Connection> conn(driver->connect(url, properties));
    connexion(conn);
    chambres = AfficherDonnees(conn);

    for (int i = 0; i < chambres.size(); i++) {
        cout << chambres[i].numero << endl;
    }

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ApplicationHotel::MyForm form;
    Application::Run(% form);
}

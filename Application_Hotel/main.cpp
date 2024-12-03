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

    //Objet de connexion mariaDB
    creationTable(conn);
    
    //Definition du vector global chambres
    chambres = afficherDonnees(conn);

    //getMenu(chambres);
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ApplicationHotel::MyForm form;
    Application::Run(% form);

}

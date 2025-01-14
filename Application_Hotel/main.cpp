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
    Properties properties({ {"user", "root"}, {"password", ""} });

    // Establish Connection
    std::unique_ptr<Connection> conn(driver->connect(url, properties));

    //Objet de connexion mariaDB
    creationTable(conn);
    
    //Definition du vector global chambres
    chambres = getData(conn);
    //Affectation de la variable booléenne global pour la liste
    //listPage = false;
    //Lancement de windows form
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ApplicationHotel::MyForm form;
    Application::Run(% form);

}

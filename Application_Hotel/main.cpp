#include "header.h";
#include "myForm.h";

void afficherTest() {
    // Utilisation de la variable globale
    std::cout << "Test dans autreFichier.cpp : " << test << std::endl;
}

int main()
{



    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    // Instantiate Driver
    Driver* driver = mariadb::get_driver_instance();

    // Configure Connection
    SQLString url("jdbc:mariadb://localhost:3306/hotel");
    Properties properties({ {"user", "jean"}, {"password", "123"} });

    // Establish Connection
    unique_ptr<Connection> conn(driver->connect(url, properties));

    connexion(conn);

    cout << test;

    ApplicationHotel::MyForm form;
    Application::Run(% form);

}

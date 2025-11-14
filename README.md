# Hotel Reservation Simulation

## Description

This application is a **hotel reservation simulation** developed in **C++/CLI** using **Windows Forms**.  
It allows managing clients, entering their information, and viewing statistics about reservations.

The interface includes:

- **Buttons**:  
  - `btnOk` : Confirm the action or input  
  - `btnRetour` : Go back to the previous screen  
  - `btnQuitter` : Exit the application  
  - `btnStats` : Display reservation statistics  

- **Labels**:  
  - `labelNom` : Displays "Name" for client input  
  - `labelPrenom` : Displays "First Name" for client input  

- **TextBoxes**:  
  - `textBoxNom` : Client's last name input  
  - `textBoxPrenom` : Client's first name input  
  - `textBoxStats` : Displays reservation statistics  

- **ListView**: `listView1` with columns `Number`, `First Name`, `Last Name` to display the client list  

- **Panel**: `panel1` groups several controls to organize the interface neatly

## Interface

Here’s an overview of the interface:

![Interface Preview](link_to_image.png)  

*(Replace `link_to_image.png` with the path to your screenshot.)*

## Features

- Add a client with their **first and last name**  
- Display the list of registered clients  
- Show details of a selected client  
- View reservation statistics  
- Simple navigation with the **Back** button  
- Dynamic control visibility for a clean and clear interface  

## Prerequisites

- Visual Studio 2019 or 2022  
- .NET Framework compatible with Windows Forms  

## Build and Run

1. Open the `.sln` project file in Visual Studio  
2. Select the `Debug` or `Release` configuration  
3. Build the project  
4. Run the application and interact with the interface  

## Main Events

| Control        | Event                     | Description                                   |
|----------------|---------------------------|-----------------------------------------------|
| `btnRetour`    | Click                     | Go back to the previous screen               |
| `btnOk`        | Click                     | Confirm the addition or current action       |
| `listView1`    | SelectedIndexChanged      | Display details of the selected client      |
| `textBoxStats` | TextChanged               | Dynamically updates the statistics          |
| `panel1`       | Paint                     | Handles the panel rendering                  |

## Author

Jean Guyot

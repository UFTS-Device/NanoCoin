#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define nanocoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "NanoCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H

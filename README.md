# Tugas-strukdat

# Stack (Undo)

Stack digunakan untuk membuat fitur UNDO. Setiap karakter yang diketik user disimpan menggunakan LIFO.
Saat user melakukan UNDO, karakter terakhir akan dihapus.

Operasi yang digunakan

push,pop,top,isEmpty

var. yang dipakai

WRITE = push karakter

UNDO = pop karakter

PRINT = tampilkan seluruh teks dari bottom ke top

# Queue (Customer Service Queue)

Queue digunakan untuk mensimulasikan antrian customer service. Struktur ini menggunakan prinsip FIFO (First In First Out).

Operasi yang digunakan

enqueue, dequeue, front, isEmpty

var. yang dipakai

ARRIVE = enqueue customer

NEXT = dequeue customer yang paling depan

LIST = tampilkan seluruh antrian

# Deque (Task Scheduler with Priority)

Deque digunakan untuk mensimulasikan sistem penjadwalan tugas dengan dua tingkat prioritas: urgent dan normal.
Struktur ini mendukung operasi penambahan dan penghapusan elemen dari kedua sisi, sehingga sesuai untuk mengelola task dengan prioritas berbeda.

Operasi yang digunakan

pushFront, pushBack, popFront, popBack, isEmpty, printDeque.

var. yang dipakai

ADD_URGENT = pushFront (task urgent dimasukkan paling depan).
ADD_NORMAL = pushBack (task normal ditambahkan di belakang).
RUN = popFront (task paling depan dijalankan/diambil).
DROP = popBack (task paling belakang dibuang).
LIST = menampilkan seluruh task dari front ke rear.

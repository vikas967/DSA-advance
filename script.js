// Patient Registration
document.getElementById('patientForm').addEventListener('submit', function (e) {
    e.preventDefault();

    const name = document.getElementById('patientName').value;
    const age = document.getElementById('patientAge').value;
    const gender = document.getElementById('patientGender').value;
    const contact = document.getElementById('patientContact').value;

    const patientList = document.getElementById('patientList');
    const newPatient = document.createElement('li');
    newPatient.textContent = `${name}, Age: ${age}, Gender: ${gender}, Contact: ${contact}`;
    patientList.appendChild(newPatient);

    this.reset();
});

// Appointment Scheduling
document.getElementById('appointmentForm').addEventListener('submit', function (e) {
    e.preventDefault();

    const patient = document.getElementById('appointmentPatient').value;
    const doctor = document.getElementById('appointmentDoctor').value;
    const date = document.getElementById('appointmentDate').value;

    const appointmentList = document.getElementById('appointmentList');
    const newAppointment = document.createElement('li');
    newAppointment.textContent = `Patient: ${patient}, Doctor: ${doctor}, Date: ${date}`;
    appointmentList.appendChild(newAppointment);

    this.reset();
});

// Bed Management
document.getElementById('bedForm').addEventListener('submit', function (e) {
    e.preventDefault();

    const type = document.getElementById('bedType').value;
    const number = document.getElementById('bedNumber').value;
    const status = document.getElementById('bedStatus').value;

    const bedList = document.getElementById('bedList');
    const newBed = document.createElement('li');
    newBed.textContent = `Type: ${type}, Bed Number: ${number}, Status: ${status}`;
    bedList.appendChild(newBed);

    this.reset();
});

// Medical Supplies Management
document.getElementById('supplyForm').addEventListener('submit', function (e) {
    e.preventDefault();

    const name = document.getElementById('supplyName').value;
    const quantity = document.getElementById('supplyQuantity').value;

    const supplyList = document.getElementById('supplyList');
    const newSupply = document.createElement('li');
    newSupply.textContent = `Supply: ${name}, Quantity: ${quantity}`;
    supplyList.appendChild(newSupply);

    this.reset();
});

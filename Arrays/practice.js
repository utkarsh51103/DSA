const obj = {
    name: "John",
    age: 30,
    city: "New York",
    country: "USA",
    occupation: "Engineer",
    hobbies: ["reading", "traveling", "sports"],
};

console.log(Object.values(obj)[5].map(h=>{
    return h.toUpperCase();
}))
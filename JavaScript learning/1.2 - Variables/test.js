let conf = confirm("Are you older than 18?")
let name = prompt("What's your name?" "")
if(conf){
    alert(`congrats, ${name}! You're an adult!`)
}
else{
    alert(`Sorry, ${name}. You're a kid! Still gotta go to school >:)`)
}
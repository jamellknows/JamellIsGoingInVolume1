const element = <h1> Hello, world!</h1>

const name = 'Josh Perez';

const element = <h1>Hello, {name}</h1>;

ReactDOM.render(
    element,
    document.getElementById('root')
);

// any valid javascript expression can go inside the curly braces in jsx

function formatName(user){
    return user.firstName + ' '
    + user.lastName;
}

const user = {
    firstName: 'Harper',
    lastName: 'Perez'
};

const element = (
    <h1>
    Hello, {formatName(user)}!
    </h1>
)
//round brackets for html curly braces for js
// after compilation jsx expresions become regular javascript function calls and evaluate to javascript objects
//jsx-> js -> js objects
//jsx can be used in curly braces i.e for if and for statements 
// jsx can naturally be used inside for and if statements as it is implied
function getGreeting(user){
    if (user){
        return <h1> Hello, {formatName(user)}!</h1>;
    }
    return <h1>Hello, Stranger.</h1>;
}

//specifiying attributes 

const element = <div tabIndex="0"></div> //attribute

// used curly braces to embed a javascript expreesion in an attribute

const element = <img src = {user.avatarUrl}></img>
// image passed into element 

//jsx uses camelCase 

//specifying children 

const element = <img src = {user.avatarUrl}/>; // can close elements if empty early

// jsx tags can contain or may contain children 

const element = (
    <div>
        <h1>
            Hello !
        </h1>
        <h2>
            Good to see you here.
        </h2>
    </div>
);

//jsx prevents injection attacks

const title = 
response.potentiallyMaliciousInput;

//This is safe:
const element = <h1>{title}</h1>;
//don't have to worry about someone stealing data through this 


//jsx represents objects

//Babel compiles jsx own to React.createElement() calls

//the next two are identical 

const element = (
    <h1 className="greeting">
        Hello, world!
    </h1>
);

const element = React.createElement(
    'h1',
    {className: 'greeting'},
    'Hello, world!'
);

//React.createElement() crrates this object
const element = {
    type: 'h1',
    props: {
        classsName: 'greeting',
        children: 'Hello, world!'
    }
};





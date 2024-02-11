import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  let counter=5
  return (
    <>
    <h2>Chai Aur React</h2>
    <h3>Counter Value:{counter}</h3>
    <button>Add Value</button>
    <br />
    <button>Remove Value</button>
    </>
  )
}

export default App
